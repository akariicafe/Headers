@class AVHapticPlayerParameterCurve;

@interface AVHapticEvent : NSObject <NSSecureCoding> {
    union { unsigned long long _eventType; unsigned long long _paramType; } _u;
    struct AVHapticPlayerFixedParameter { unsigned long long type; float value; } _fixedParams[8];
    AVHapticPlayerParameterCurve *_paramCurve;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double time;
@property (readonly) double duration;
@property (readonly) unsigned long long eventCategory;
@property (readonly) unsigned long long eventType;
@property (readonly) unsigned long long paramType;
@property (readonly) float value;
@property (readonly) struct AVHapticPlayerFixedParameter { unsigned long long x0; float x1; } *fixedParams;
@property (readonly) AVHapticPlayerParameterCurve *parameterCurve;
@property (readonly) long long fixedParamCount;

+ (id)eventWithEventType:(unsigned long long)a0 time:(double)a1;
+ (id)eventWithEventType:(unsigned long long)a0 time:(double)a1 duration:(double)a2;
+ (id)eventWithEventType:(unsigned long long)a0 time:(double)a1 parameters:(const struct AVHapticPlayerFixedParameter { unsigned long long x0; float x1; } *)a2 count:(long long)a3;
+ (id)eventWithEventType:(unsigned long long)a0 time:(double)a1 parameters:(const struct AVHapticPlayerFixedParameter { unsigned long long x0; float x1; } *)a2 count:(long long)a3 duration:(double)a4;
+ (id)eventWithParameter:(unsigned long long)a0 value:(float)a1 time:(double)a2;
+ (id)eventWithParameterCurve:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEventType:(unsigned long long)a0 time:(double)a1 duration:(double)a2;
- (id)initWithEventType:(unsigned long long)a0 time:(double)a1 parameters:(const struct AVHapticPlayerFixedParameter { unsigned long long x0; float x1; } *)a2 count:(long long)a3 duration:(double)a4;
- (id)initWithParameter:(unsigned long long)a0 value:(float)a1 time:(double)a2;
- (id)initWithParameterCurve:(id)a0;

@end
