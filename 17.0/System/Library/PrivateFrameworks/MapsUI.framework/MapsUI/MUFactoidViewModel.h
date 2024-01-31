@class NSString, UIColor;

@interface MUFactoidViewModel : NSObject <MUFactoidViewModel>

@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) UIColor *symbolColor;
@property (readonly, nonatomic) UIColor *darkSymbolColor;
@property (readonly, nonatomic) NSString *titleString;
@property (readonly, nonatomic) NSString *valueString;
@property (readonly, nonatomic) BOOL shouldReverseForRTLLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)darkSymbolColorWithGEOColor:(id)a0;
+ (unsigned long long)maximumFractionDigitsForFactoid:(id)a0;
+ (unsigned long long)roundingModeForFactoid:(id)a0;
+ (id)symbolColorWithGEOColor:(id)a0;
+ (id)viewModelForFactoid:(id)a0;
+ (id)viewModelsFromFactoids:(id)a0;

- (id)buildSymbolWithFont:(id)a0;

@end
