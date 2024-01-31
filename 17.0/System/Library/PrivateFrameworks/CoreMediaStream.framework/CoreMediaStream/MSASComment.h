@class NSString, NSDate;

@interface MSASComment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *GUID;
@property (nonatomic) int ID;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSDate *clientTimestamp;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *personID;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (nonatomic) BOOL isDeletable;
@property (nonatomic) BOOL isMine;
@property (nonatomic) BOOL isLike;
@property (nonatomic) BOOL isCaption;
@property (nonatomic) BOOL isBatchComment;
@property (retain, nonatomic) NSString *content;

+ (id)comment;
+ (id)MSASPCommentFromProtocolDictionary:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
