@class NSString, NSArray;

@interface SBHIconRelativePath : NSObject <BSDescriptionProviding, NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *folderIdentifier;
@property (readonly, copy, nonatomic) NSString *listIdentifier;
@property (readonly, copy, nonatomic) NSArray *priorIconIdentifiers;
@property (readonly, copy, nonatomic) NSArray *subsequentIconIdentifiers;
@property (readonly, nonatomic) unsigned long long gridCellInfoOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)iconRelativePathWithFolderIdentifier:(id)a0 listIdentifier:(id)a1;
- (id)initWithFolderIdentifier:(id)a0 listIdentifier:(id)a1 priorIconIdentifiers:(id)a2 subsequentIconIdentifiers:(id)a3 gridCellInfoOptions:(unsigned long long)a4;

@end
