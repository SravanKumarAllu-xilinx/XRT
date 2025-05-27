#ifndef DRV_H_
#define DRV_H_

#include <vector>
#include <memory>
#include <string>

namespace xrt_core::edge {

class dev;
class drv  //Base class for edge type of drivers
{
public:
   virtual void
   scan_devices(std::vector<std::shared_ptr<dev>>& dev_list) = 0;

   virtual std::shared_ptr<dev>
   create_edev(const std::string& sysfs="") const = 0;
};

} //namespace xrt_core::edge
#endif
