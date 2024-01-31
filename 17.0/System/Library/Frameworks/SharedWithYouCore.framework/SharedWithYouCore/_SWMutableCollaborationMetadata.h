@class NSString, _SWCollaborationShareOptions, NSArray, NSPersonNameComponents;

@interface _SWMutableCollaborationMetadata : _SWCollaborationMetadata

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) _SWCollaborationShareOptions *defaultShareOptions;
@property (copy, nonatomic) NSArray *defaultOptions;
@property (copy, nonatomic) NSString *initiatorHandle;
@property (retain, nonatomic) NSPersonNameComponents *initiatorNameComponents;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCollaborationIdentifier:(id)a0;
- (id)initWithLocalIdentifier:(id)a0 collaborationIdentifier:(id)a1;

@end
