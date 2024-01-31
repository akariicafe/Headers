@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject

@property (retain, nonatomic) IDSServiceMonitor *monitor;
@property (readonly, nonatomic) NSMutableSet *listeners;

- (BOOL)removeListenerID:(id)a0;
- (BOOL)hasListenerID:(id)a0;
- (id)initWithService:(id)a0;
- (BOOL)addListenerID:(id)a0;
- (void).cxx_destruct;

@end
