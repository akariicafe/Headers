@interface STWorkoutSetStateRequest : AFSiriRequest {
    long long _workoutState;
}

+ (BOOL)supportsSecureCoding;

- (id)_initWithState:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (long long)workoutState;

@end
