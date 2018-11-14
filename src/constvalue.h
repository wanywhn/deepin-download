#ifndef CONSTVALUE_H
#define CONSTVALUE_H

#define ALREADY_IN_DOWNLOADING "already_in_downloading"
enum class TaskStatus{
    Downloading,
    Paused,
    Deleted=3,
    Finished=4,

};
#define COLUMN_INDEX_SAVEPATH 9
#define  TDSTATUS         6
#define  TDGID            5

#endif // CONSTVALUE_H
