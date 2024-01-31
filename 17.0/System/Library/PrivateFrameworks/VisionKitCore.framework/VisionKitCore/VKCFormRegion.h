@class NSArray, NSString, VKQuad;

@interface VKCFormRegion : NSObject

@property (nonatomic) unsigned long long fieldType;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) unsigned long long fieldSource;
@property (nonatomic) BOOL autofillNewContextStart;
@property (nonatomic) long long maxCharacterCount;
@property (retain, nonatomic) VKQuad *quad;
@property (retain, nonatomic) NSArray *children;
@property (nonatomic) double suggestedLineHeight;
@property (readonly, nonatomic) unsigned long long regionType;
@property (readonly, nonatomic) NSString *autoFillContentType;

+ (id)autoFillContentTypeForCRContentType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)crFormFieldWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithSourceRegion:(id)a0;

@end
