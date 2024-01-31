@class NSString, BBSectionInfo;

@interface BBParentSectionDataProviderFactory : NSObject <BBSectionIdentity, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) BBSectionInfo *sectionInfo;
@property (copy, nonatomic) NSString *universalSectionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)factoryFromSectionInfo:(id)a0;

- (id)sectionIcon;
- (void)encodeWithCoder:(id)a0;
- (id)sectionIdentifier;
- (id)sectionDisplayName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)dataProviders;
- (id)initWithSectionInfo:(id)a0;

@end
