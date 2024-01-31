@interface REMExporting : NSObject

+ (id)exportICSCalendarFromReminders:(id)a0;
+ (id)_icsCalendarItemsFromReminders:(id)a0 exportingOption:(long long)a1;
+ (BOOL)_updateICSComponentWithReminder:(id)a0 icsCalendarItem:(id)a1;
+ (id)exportICSCalendarFromReminders:(id)a0 exportingOption:(long long)a1;
+ (id)icsTodoFromReminder:(id)a0;
+ (id)icsTodoFromReminder:(id)a0 exportingOption:(long long)a1;

@end
