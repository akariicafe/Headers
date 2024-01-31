@class NSString;

@interface RBSIdentityAndRecordInfoProvider : NSObject <RBSWrappedLSInfoProvider> {
    NSString *_personaString;
    NSString *_bundleID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_providerWithIdentity:(id)a0 record:(id)a1;

- (id)fetchWrappedInfoWithError:(out id *)a0;
- (void).cxx_destruct;
- (id)_initWithIdentity:(id)a0 record:(id)a1;

@end
