#ifndef DOWNRECORD_H
#define DOWNRECORD_H
#include <QString>
#include "constvalue.h"


/**
* 刷到ListView 上的结构
*/
struct TBItem {

    QString uri;        // 文件名
    QString Progress;   // 大小和进度
    QString Speed;      // 速度
    QString RestTime;   // 剩余时间
    QString State;      // 状态
    QString gid;        // gid
    QString dtime;      // dtime
    QString savepath;   // 保存路径
};

/**
* 存在数据库中的记录结构
*/
struct DDRecord {

    int id;
    QString url;
    QString gid;
    TaskStatus type;
    int classn;
    QString dtime;      // dtime
    QString savepath;

};

#endif // DOWNRECORD_H
