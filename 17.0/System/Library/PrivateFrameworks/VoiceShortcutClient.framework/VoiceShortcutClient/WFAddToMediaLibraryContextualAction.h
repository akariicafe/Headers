@class WFContextualActionMediaItemDescriptor;

@interface WFAddToMediaLibraryContextualAction : WFContextualAction

@property (readonly, nonatomic) WFContextualActionMediaItemDescriptor *mediaItemDescriptor;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMediaItemDescriptor:(id)a0;

@end
