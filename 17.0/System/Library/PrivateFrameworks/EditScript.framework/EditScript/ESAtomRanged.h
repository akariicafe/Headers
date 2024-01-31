@class NSString;

@interface ESAtomRanged : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } editRange;
@property (retain, nonatomic) NSString *replacementText;

+ (id)atomWithEditRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementText:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEditRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementText:(id)a1;
- (BOOL)isEqualToEditScriptAtomRanged:(id)a0;

@end
