@class NSString, NSArray;

@interface RMUIPluginSectionViewModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *heading;
@property (retain) NSArray *viewModels;

+ (id)newPluginSectionViewModelWithHeading:(id)a0 viewModels:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithHeading:(id)a0 viewModels:(id)a1;

@end
