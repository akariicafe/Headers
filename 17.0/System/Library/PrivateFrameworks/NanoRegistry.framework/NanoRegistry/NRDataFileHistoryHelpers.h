@interface NRDataFileHistoryHelpers : NSObject

+ (BOOL)archiveDeviceHistory:(id)a0;
+ (id)unarchiveSecureProperties;
+ (id)unarchiveDeviceHistory;
+ (BOOL)createMissingDates:(id)a0;
+ (BOOL)archiveSecureProperties:(id)a0;

@end
