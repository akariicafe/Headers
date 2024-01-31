@class NSString;

@interface WPDPersistence : NSObject

@property (nonatomic) BOOL needsInit;
@property (nonatomic) BOOL systemFirstUnlocked;
@property (retain, nonatomic) NSString *bootUUID;
@property (nonatomic) BOOL isRangingEnabled;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)currentBootSessionUUID;
- (void)deletePropertyValue:(id)a0;
- (void)firstUnlockedWithEvent:(BOOL)a0;
- (BOOL)readBoolPropertyValue:(id)a0;
- (id)readStringPropertyValue:(id)a0;
- (void)synchronisePrefs;
- (void)writeBoolProperty:(id)a0 Value:(BOOL)a1;
- (void)writeStringProperty:(id)a0 Value:(id)a1;

@end
