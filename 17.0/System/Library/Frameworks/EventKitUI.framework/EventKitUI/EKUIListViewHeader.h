@interface EKUIListViewHeader : NSObject

+ (BOOL)_isDateInCurrentYear:(id)a0 currentYearStart:(id *)a1 currentYearEnd:(id *)a2 timeZone:(id)a3;
+ (id)_stringForHeaderDate:(id)a0 currentYearStart:(id *)a1 currentYearEnd:(id *)a2 timeZone:(id)a3;
+ (id)headerWithTableView:(id)a0 reuseIdentifier:(id)a1 date:(id)a2 timeZone:(id)a3 currentYearStart:(id *)a4 currentYearEnd:(id *)a5;

@end
