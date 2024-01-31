@class NSString, NSSet;

@interface _BRContainerItem : BRQueryItem <NSSecureCoding, NSCopying> {
    NSString *_containerID;
    NSSet *_containerClientIDs;
    NSString *_localizedName;
    BOOL _isPristine;
    NSString *_displayName;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)itemIdentifier;
- (unsigned long long)capabilities;
- (id)filename;
- (id)typeIdentifier;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isHidden;
- (id)parentItemIdentifier;
- (void).cxx_destruct;
- (id)displayName;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)containerDisplayName;
- (id)fp_cloudContainerClientBundleIdentifiers;
- (id)fp_cloudContainerIdentifier;
- (BOOL)fp_isContainer;
- (BOOL)fp_isContainerPristine;
- (id)initWithQueryItem:(id)a0 container:(id)a1 zoneRowID:(id)a2;
- (id)subclassDescription;

@end
