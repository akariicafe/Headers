@interface HFServiceLikeItemResultFactory : NSObject

+ (void)_appendDestinationURLResultsForHomeKitObject:(id)a0 backingAccessory:(id)a1 toResults:(id)a2;
+ (void)_appendSoftwareUpdateResultsForAccessory:(id)a0 toResults:(id)a1;
+ (id)populateStandardResultsForHomeKitObject:(id)a0 withBackingAccessory:(id)a1 displayMetadata:(id)a2 readResponse:(id)a3 batteryLevelResults:(id)a4 valueSource:(id)a5 updateOptions:(id)a6;

@end
