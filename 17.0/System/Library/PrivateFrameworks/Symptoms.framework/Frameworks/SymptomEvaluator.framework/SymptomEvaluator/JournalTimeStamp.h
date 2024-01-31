@interface JournalTimeStamp : NSObject

+ (id)getCurrentJournalNameUsingPrefix:(id)a0;
+ (id)getDateFromJournalName:(id)a0;
+ (id)getJournalNameUsingPrefix:(id)a0 forDate:(id)a1;
+ (BOOL)shouldPurgeJournal:(id)a0 olderThan:(id)a1;

@end
