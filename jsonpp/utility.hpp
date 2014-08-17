#pragma once

namespace json{ inline namespace v1{
template<class T>
int inline replace_all(T& source, const T& find, const T& replace)
{
    int num=0;
    typename T::size_type fLen = find.size();
    typename T::size_type rLen = replace.size();
    for (typename T::size_type pos=0; (pos=source.find(find, pos))!=T::npos; pos+=rLen)
    {
        num++;
        source.replace(pos, fLen, replace);
    }
    return num;
}
}}
