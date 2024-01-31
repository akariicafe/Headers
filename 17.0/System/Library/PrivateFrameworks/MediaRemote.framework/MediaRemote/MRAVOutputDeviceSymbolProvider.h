@interface MRAVOutputDeviceSymbolProvider : NSObject

+ (id)_symbolNameMap;
+ (id)_currentDeviceRoutingSymbolName;
+ (id)_fallbackSymbolNameForOutputDevice:(id)a0;
+ (id)symbolNameForClusterOutputDevice:(id)a0;
+ (id)symbolNameForModelID:(id)a0;
+ (id)symbolNameForOutputDevice:(id)a0;
+ (id)symbolNameForOutputDevices:(id)a0;

@end
