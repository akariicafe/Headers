@class NSString, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CHSWidgetEventServicePublisher : NSObject {
    NSString *_machServiceName;
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void)_invalidateConnection;
- (void)dealloc;
- (void)activate;
- (id)_activeConnection;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)deactivate;
- (void)publishOpenEventWithURL:(id)a0;
- (void)publishOpenEventWithUserActivity:(id)a0;

@end
