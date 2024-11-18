import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/gustavo/Documents/Navega-o-com-ROS/install/cg'
