@class NSString, RMModelDeclarationBase, NSArray;

@interface RMUIKeyValueViewModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property short symbol;
@property (retain) NSString *title;
@property (retain) RMModelDeclarationBase *declaration;
@property (retain) NSString *declarationIdentifier;
@property (retain) NSString *declarationServerToken;
@property (retain) NSString *declarationType;
@property (retain) NSArray *detailViewModels;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)clearModel;

@end
