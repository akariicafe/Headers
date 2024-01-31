@class NSString, NSArray, NSDate;

@interface AskTo.ATQuestion : NSObject {
    void /* unknown type, empty encoding */ systemId;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ summary;
    void /* unknown type, empty encoding */ notificationText;
    void /* unknown type, empty encoding */ answerChoices;
    void /* unknown type, empty encoding */ associatedContentDisplayName;
    void /* unknown type, empty encoding */ associatedContentIdentifier;
    void /* unknown type, empty encoding */ associatedContentBundleIdentifier;
    void /* unknown type, empty encoding */ associatedContentAdamIdentifier;
    void /* unknown type, empty encoding */ expirationDate;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, retain) void /* unknown type, empty encoding */ topic;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *notificationText;
@property (nonatomic, copy) NSArray *answerChoices;
@property (nonatomic, copy) NSString *associatedContentDisplayName;
@property (nonatomic, copy) NSString *associatedContentIdentifier;
@property (nonatomic, copy) NSString *associatedContentBundleIdentifier;
@property (nonatomic, copy) NSString *associatedContentAdamIdentifier;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithId:(id)a0 topic:(id)a1 title:(id)a2 summary:(id)a3;
- (id)initWithSystemId:(id)a0 version:(double)a1 id:(id)a2 topic:(id)a3 title:(id)a4 summary:(id)a5 notificationText:(id)a6 answerChoices:(id)a7;
- (id)initWithTopic:(id)a0 title:(id)a1 summary:(id)a2;

@end
