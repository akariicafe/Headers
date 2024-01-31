@class NSNumber, NSDictionary, NSString;

@interface FBKSCustomBehavior : NSObject

@property (nonatomic) BOOL makeVisible;
@property (nonatomic) BOOL notifyOnUpload;
@property (retain, nonatomic) NSNumber *formId;
@property (retain, nonatomic) NSDictionary *answers;
@property (nonatomic) BOOL launchNewDraft;
@property (nonatomic) BOOL isCaptive;
@property (readonly, copy, nonatomic) NSString *description;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
