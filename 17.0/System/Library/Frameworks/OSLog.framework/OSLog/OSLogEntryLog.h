@class NSString, NSArray;

@interface OSLogEntryLog : OSLogEntry <OSLogEntryFromProcess, OSLogEntryWithPayload>

@property (readonly, nonatomic) long long level;
@property (readonly, nonatomic) unsigned long long activityIdentifier;
@property (readonly, nonatomic) NSString *process;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSString *sender;
@property (readonly, nonatomic) unsigned long long threadIdentifier;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSArray *components;
@property (readonly, nonatomic) NSString *formatString;
@property (readonly, nonatomic) NSString *subsystem;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithEventProxy:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0 composedMessage:(id)a1 processIdentifier:(int)a2;

@end
