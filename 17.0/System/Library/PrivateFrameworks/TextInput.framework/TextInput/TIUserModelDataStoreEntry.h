@class NSString, NSData, NSDate, NSNumber;

@interface TIUserModelDataStoreEntry : NSObject

@property (retain) NSDate *timestamp;
@property (retain) NSString *key;
@property (retain) NSString *inputMode;
@property (retain) NSNumber *value;
@property (retain) NSNumber *secondaryValue;
@property (retain) NSNumber *realValue;
@property (retain) NSData *properties;

- (void).cxx_destruct;
- (id)initWithTimestamp:(id)a0 withKey:(id)a1 withInputMode:(id)a2 withValue:(id)a3 withSecondaryValue:(id)a4 withRealValue:(id)a5 withProperties:(id)a6;

@end
