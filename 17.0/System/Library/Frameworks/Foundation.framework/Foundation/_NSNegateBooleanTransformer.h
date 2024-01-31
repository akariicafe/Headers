@interface _NSNegateBooleanTransformer : _NSSharedValueTransformer

+ (Class)transformedValueClass;

- (id)description;
- (BOOL)_isBooleanTransformer;
- (id)transformedValue:(id)a0;

@end
