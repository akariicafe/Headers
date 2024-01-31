@class NSString;

@interface DialogElement : NSObject

@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSString *fullPrint;
@property (retain, nonatomic) NSString *fullSpeak;
@property (retain, nonatomic) NSString *supportingPrint;
@property (retain, nonatomic) NSString *supportingSpeak;
@property (nonatomic) BOOL printOnly;
@property (nonatomic) BOOL spokenOnly;

- (void).cxx_destruct;

@end
