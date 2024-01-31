@class NSObject;
@protocol OS_os_log;

@interface NADelegateMethodLogSettings : NSObject

@property (readonly, copy, nonatomic) id /* block */ argumentFormatter;
@property (copy, nonatomic) id /* block */ logger;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) unsigned char logType;

- (id)init;
- (void).cxx_destruct;
- (id)formattedDescriptionForArgument:(id)a0;
- (id)initWithLog:(id)a0 logType:(unsigned char)a1 argumentFormatter:(id /* block */)a2;

@end
