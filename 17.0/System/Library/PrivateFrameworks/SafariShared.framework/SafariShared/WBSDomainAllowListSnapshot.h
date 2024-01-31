@class NSString, NSSet;

@interface WBSDomainAllowListSnapshot : NSObject <WBSRemotePlistSnapshot> {
    NSSet *_allowedDomains;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)plistDataWithFormat:(unsigned long long)a0;
- (id)initWithPlistData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDomains:(id)a0;
- (BOOL)isDomainAllowed:(id)a0;

@end
