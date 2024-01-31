@interface PGTitleSpecTimeArgument : PGTitleSpecArgument

@property (readonly) unsigned long long type;

+ (id)argumentWithTimeType:(unsigned long long)a0;

- (id)_anniversaryTitleWithMomentNodes:(id)a0;
- (id)_birthdayTitleWithMomentNodes:(id)a0;
- (id)_holidayTitleWithMomentNodes:(id)a0;
- (id)_resolvedStringWithMomentNodes:(id)a0 argumentEvaluationContext:(id)a1;
- (id)_resolvedStringWithMomentNodes:(id)a0 features:(id)a1 argumentEvaluationContext:(id)a2;
- (id)_yearsAgoStringWithEventNodes:(id)a0 relativeToDateComponents:(id)a1;
- (id)_yearsAgoTitle;
- (id)initWithTimeType:(unsigned long long)a0;

@end
