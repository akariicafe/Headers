@class NSString;

@interface CMFitnessPlusWorkout : CMWorkout {
    NSString *fCatalogWorkoutId;
    long long fMediaType;
}

@property (readonly, nonatomic) NSString *catalogWorkoutId;
@property (readonly, nonatomic) long long mediaType;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isAvailable;
+ (id)fitnessPlusWorkoutInstance:(id)a0;
+ (id)mediaTypeName:(long long)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSessionId:(id)a0 type:(long long)a1 catalogWorkoutId:(id)a2 mediaType:(long long)a3;
- (id)initWithSessionId:(id)a0 type:(long long)a1 catalogWorkoutId:(id)a2 mediaType:(long long)a3 error:(id *)a4;
- (id)initWithSessionId:(id)a0 type:(long long)a1 catalogWorkoutId:(id)a2 mediaType:(long long)a3 locationType:(long long)a4 error:(id *)a5;

@end
