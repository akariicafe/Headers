@class NSNumber, NSString;

@interface _LTUnvalidatedEdgeInfo : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long targetPhraseIndex;
@property (readonly, nonatomic) unsigned long long targetLinkIndex;
@property (readonly, nonatomic) NSNumber *targetGender;
@property (readonly, nonatomic) NSNumber *defaultGender;
@property (readonly, copy, nonatomic) NSString *meaningDescription;

+ (id)genderEdgeInfoWithTargetPhraseIndex:(unsigned long long)a0 targetLinkIndex:(unsigned long long)a1 gender:(unsigned long long)a2 defaultGender:(unsigned long long)a3;
+ (id)meaningEdgeInfoWithTargetPhraseIndex:(unsigned long long)a0 targetLinkIndex:(unsigned long long)a1 meaningDescription:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithTargetPhraseIndex:(unsigned long long)a0 targetLinkIndex:(unsigned long long)a1 type:(unsigned long long)a2 meaningDescription:(id)a3 gender:(id)a4 defaultGender:(id)a5;

@end
