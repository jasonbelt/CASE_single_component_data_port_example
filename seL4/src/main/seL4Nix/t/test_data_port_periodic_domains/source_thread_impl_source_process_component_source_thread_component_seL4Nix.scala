// #Sireum

package t.test_data_port_periodic_domains

import org.sireum._
import art._

@ext object source_thread_impl_source_process_component_source_thread_component_seL4Nix {
  // returns T if seL4's read_port port is empty, F otherwise 
  def read_port_IsEmpty(): B = $

  // returns result of dequeuing seL4's read_port port 
  def read_port_Receive(): Option[DataContent] = $

  // send payload 'd' to components connected to seL4's write_port port
  def write_port_Send(d: DataContent): Unit = $
}
