@class NSString;

@interface INCWidgetOptions : NSObject

@property (copy, nonatomic) NSString *extensionBundleIdentifier;
@property (copy, nonatomic) NSString *intentType;

- (void).cxx_destruct;
- (id)initWithExtensionBundleIdentifier:(id)a0 intentType:(id)a1;

@end
