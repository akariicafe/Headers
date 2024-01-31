@class NSString, NSMutableDictionary;
@protocol PRPosterExtensionProvider;

@interface PBFPosterExtensionInstanceCollection : NSObject <PBFExtensionInstanceProviding, BSInvalidatable> {
    NSMutableDictionary *_lock_extensionIdentifierToReasonToInstance;
    NSMutableDictionary *_lock_extensionIdentifierToReasons;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) id<PRPosterExtensionProvider> extensionProvider;
@property (readonly, copy, nonatomic) NSString *reasonPreamble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)acquireExtensionInstance:(id)a0 reason:(id)a1 error:(out id *)a2;
- (void)invalidate;
- (id)initWithExtensionProvider:(id)a0;
- (void).cxx_destruct;
- (void)relinquishExtensionInstance:(id)a0 reason:(id)a1;
- (void)_lock_invalidateInstanceForExtensionIdentifier:(id)a0 reason:(id)a1;
- (id)initWithExtensionProvider:(id)a0 reasonPreamble:(id)a1;

@end
