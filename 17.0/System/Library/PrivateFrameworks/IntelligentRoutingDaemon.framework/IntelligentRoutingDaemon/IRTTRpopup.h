@class NSString;

@interface IRTTRpopup : NSObject

@property (retain, nonatomic) NSString *header;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *otherButton;
@property (retain, nonatomic) NSString *defaultButton;
@property (retain, nonatomic) NSString *alternateButton;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL ttrWillOpen;
@property (nonatomic) BOOL dismissWillStop;

- (void).cxx_destruct;
- (id)initWithHeader:(id)a0 key:(id)a1 message:(id)a2 defaultButton:(id)a3 otherButton:(id)a4 alternateButton:(id)a5 ttrWillOpen:(BOOL)a6 dismissWillStop:(BOOL)a7;

@end
