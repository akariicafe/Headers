@class NSString, NSDate;

@interface VCPProcessingStatusEntry : NSObject

@property (readonly, nonatomic) unsigned long long taskID;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) unsigned long long attempts;
@property (readonly, nonatomic) NSDate *lastAttemptDate;
@property (readonly, nonatomic) NSDate *nextAttemptDate;

+ (id)entryWithLocalIdentifier:(id)a0 taskID:(unsigned long long)a1 status:(unsigned long long)a2 attempts:(unsigned long long)a3 lastAttemptDate:(id)a4 andNextAttemptDate:(id)a5;

- (void).cxx_destruct;
- (id)initWithLocalIdentifier:(id)a0 taskID:(unsigned long long)a1 status:(unsigned long long)a2 attempts:(unsigned long long)a3 lastAttemptDate:(id)a4 andNextAttemptDate:(id)a5;

@end
