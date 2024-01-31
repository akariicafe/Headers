@class NSString, RMModelDeclarationBase, NSArray;

@interface RMUIDeclarationInfo : NSObject

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *descriptor;
@property (retain, nonatomic) RMModelDeclarationBase *declaration;
@property (retain, nonatomic) NSString *declarationIdentifier;
@property (retain, nonatomic) NSString *declarationServerToken;
@property (retain, nonatomic) NSString *declarationType;
@property (retain, nonatomic) NSString *profileIdentifier;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isRequired;
@property (retain, nonatomic) NSArray *details;

- (void).cxx_destruct;
- (id)initWithDeclaration:(id)a0 label:(id)a1 descriptor:(id)a2;
- (id)initWithDeclarationIdentifier:(id)a0 declarationServerToken:(id)a1 declarationType:(id)a2 label:(id)a3 descriptor:(id)a4;
- (id)initWithProfileDeclaration:(id)a0 label:(id)a1 profileIdentifier:(id)a2 isRequired:(BOOL)a3 isActive:(BOOL)a4;

@end
