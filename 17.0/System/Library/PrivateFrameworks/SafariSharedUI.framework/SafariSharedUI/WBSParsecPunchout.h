@class NSString, NSURL;

@interface WBSParsecPunchout : WBSParsecModel

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *punchoutLabel;
@property (readonly, nonatomic) NSURL *punchoutURL;
@property (readonly, nonatomic) NSURL *installURL;

+ (id)schema;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
