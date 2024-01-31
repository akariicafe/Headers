@class NSString, NSObject;
@protocol OS_xpc_object;

@interface FigCaptureDeferredPhotoProcessorRequest : NSObject {
    NSObject<OS_xpc_object> *_message;
}

@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) NSString *captureRequestIdentifier;
@property (readonly, nonatomic) NSString *photoIdentifier;
@property (readonly, nonatomic) unsigned int qosClass;
@property (readonly, nonatomic) FigCaptureDeferredPhotoProcessorRequest *parent;

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithApplicationID:(id)a0 captureRequstIdentifier:(id)a1 photoIdentifier:(id)a2 message:(id)a3 qosClass:(unsigned int)a4 parent:(id)a5;

@end
