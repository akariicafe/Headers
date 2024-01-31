@class NSNumber, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface _GCHIDServiceInfo : NSObject <NSCopying> {
    NSData *_inputData;
}

@property (readonly) struct __IOHIDServiceClient { } *service;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSNumber *registryID;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)redactedDescription;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithService:(struct __IOHIDServiceClient { } *)a0 queue:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToHIDServiceInfo:(id)a0;

@end
