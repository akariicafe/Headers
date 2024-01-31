@class NSString, NSDictionary, NSURL, PKFileDescriptorXPCContainer;

@interface PKPassesXPCContainer : NSObject <NSSecureCoding, PKInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _invalidated;
    PKFileDescriptorXPCContainer *_fd;
    NSDictionary *_passFDs;
    long long _status;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *temporaryOutputDirectory;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithFileURL:(id)a0;
- (id)_init;
- (id)initWithFileDescriptor:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithFileDescriptorContainer:(id)a0;
- (void)_unarchive;
- (struct { long long x0; unsigned long long x1; })unarchivePassesWithBlock:(id /* block */)a0;
- (struct { long long x0; unsigned long long x1; })unarchivePassesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
