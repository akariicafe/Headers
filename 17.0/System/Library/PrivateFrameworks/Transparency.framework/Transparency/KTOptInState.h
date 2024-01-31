@class NSString, NSDate;

@interface KTOptInState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long state;
@property (retain) NSString *uri;
@property (retain) NSString *application;
@property (retain) NSDate *smtTimestamp;
@property (retain) NSString *osVersion;
@property (retain) NSString *serialNumber;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithApplication:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)jsonDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithURI:(id)a0 application:(id)a1;

@end
