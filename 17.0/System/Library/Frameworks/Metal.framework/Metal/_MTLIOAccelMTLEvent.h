@class NSString, MTLIOAccelDevice;
@protocol MTLDevice;

@interface _MTLIOAccelMTLEvent : IOAccelMTLEvent <MTLEventSPI> {
    unsigned long long _labelTraceID;
    NSString *_label;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _labelLock;
}

@property (readonly) MTLIOAccelDevice<MTLDevice> *device;
@property (copy) NSString *label;
@property (nonatomic) BOOL enableBarrier;
@property (readonly) BOOL supportsRollback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)label;
- (void)setLabel:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)initWithDevice:(id)a0 options:(long long)a1;
- (id)retainedLabel;

@end
