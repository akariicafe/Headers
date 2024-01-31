@interface XPCInterface : NSObject

+ (id)CTCSCreateXPCTransportInterface;
+ (id)CTCSGetExpectedClassesForOptionsOverXPCInterface;
+ (id)CTCSExpectedXPCInterfaceClassesForAllActiveDataSetRecords;
+ (void)CTCSSetExpectedClassesForXPCBrokerInterface:(id)a0;

@end
