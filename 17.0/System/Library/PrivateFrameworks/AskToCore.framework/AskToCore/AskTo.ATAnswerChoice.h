@class NSString;

@interface AskTo.ATAnswerChoice : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ title;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) void /* unknown type, empty encoding */ kind;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithId:(id)a0 title:(id)a1;

@end
