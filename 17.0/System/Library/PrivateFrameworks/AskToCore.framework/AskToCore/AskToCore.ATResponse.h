@class NSString;

@interface AskToCore.ATResponse : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ responderHandle;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) void /* unknown type, empty encoding */ originalQuestion;
@property (nonatomic, copy) NSString *responderHandle;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ chosenAnswer;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;

@end
