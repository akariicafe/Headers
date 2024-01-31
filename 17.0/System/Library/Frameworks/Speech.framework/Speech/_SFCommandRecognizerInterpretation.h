@class NSString, NSSet, NSIndexSet, NSArray;

@interface _SFCommandRecognizerInterpretation : NSObject

@property (readonly, copy, nonatomic) NSString *commandIdentifier;
@property (readonly, copy, nonatomic) NSSet *suiteIdentifiers;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, copy, nonatomic) NSIndexSet *verbIndexes;
@property (readonly, copy, nonatomic) NSArray *arguments;

- (void).cxx_destruct;
- (id)initWithCommandIdentifier:(id)a0 suiteIdentifiers:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 verbIndexes:(id)a3 arguments:(id)a4;

@end
